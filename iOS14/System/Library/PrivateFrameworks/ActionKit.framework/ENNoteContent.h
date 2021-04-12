/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSString;

@interface ENNoteContent : NSObject {

	NSString* _emml;

}

@property (nonatomic,copy) NSString * emml;              //@synthesize emml=_emml - In the implementation block
+(id)noteContentWithString:(id)arg1 ;
+(id)noteContentWithContentArray:(id)arg1 ;
+(id)noteContentWithSanitizedHTML:(id)arg1 ;
+(id)noteContentWithENML:(id)arg1 ;
-(id)enml;
-(NSString *)emml;
-(id)enmlWithNote:(id)arg1 ;
-(id)initWithENML:(id)arg1 ;
-(void)setEmml:(NSString *)arg1 ;
@end

