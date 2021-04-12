/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)enmlWithNote:(id)arg1 ;
-(id)initWithENML:(id)arg1 ;
-(id)enml;
-(NSString *)emml;
-(void)setEmml:(NSString *)arg1 ;
@end

