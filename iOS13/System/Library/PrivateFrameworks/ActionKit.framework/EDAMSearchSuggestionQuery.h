/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMNoteFilter;

@interface EDAMSearchSuggestionQuery : FATObject {

	NSString* _prefix;
	EDAMNoteFilter* _contextFilter;

}

@property (nonatomic,retain) NSString * prefix;                           //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) EDAMNoteFilter * contextFilter;              //@synthesize contextFilter=_contextFilter - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(EDAMNoteFilter *)contextFilter;
-(void)setContextFilter:(EDAMNoteFilter *)arg1 ;
@end

