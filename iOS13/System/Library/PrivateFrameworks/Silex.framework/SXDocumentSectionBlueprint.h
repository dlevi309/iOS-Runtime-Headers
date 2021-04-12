/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDocumentSectionBlueprint.h>
@class NSArray;


@protocol SXDocumentSectionBlueprint <NSObject>
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSArray *)items;

@end


@class NSArray, NSString;

@interface SXDocumentSectionBlueprint : NSObject <SXDocumentSectionBlueprint> {

	NSArray* _items;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
+(id)blueprintWithItems:(id)arg1 ;
-(NSArray *)items;
@end

