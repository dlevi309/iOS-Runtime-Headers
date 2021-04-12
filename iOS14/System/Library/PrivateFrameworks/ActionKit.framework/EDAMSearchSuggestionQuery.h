/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

