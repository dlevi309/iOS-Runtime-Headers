/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXTextSelectionManager.h>

@protocol SXTextSelectionManager <NSObject>
@required
-(void)addTextSelecting:(id)arg1;
-(void)clearSelection;

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
-(void)addTextSelecting:(id)arg1 ;
-(void)clearSelection;
-(NSHashTable *)textSelecting;
@end

