/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextSelectionManager.h>

@protocol SXTextSelectionManager <NSObject>
@required
-(void)clearSelection;
-(void)addTextSelecting:(id)arg1;

@end


@class NSHashTable, NSString;

@interface SXTextSelectionManager : NSObject <SXTextSelectionManager> {

	NSHashTable* _textSelecting;

}

@property (nonatomic,readonly) NSHashTable * textSelecting;              //@synthesize textSelecting=_textSelecting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)clearSelection;
-(void)addTextSelecting:(id)arg1 ;
-(NSHashTable *)textSelecting;
@end

