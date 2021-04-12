/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteRestrictions : FATObject {

	NSNumber* _noUpdateTitle;
	NSNumber* _noUpdateContent;
	NSNumber* _noEmail;
	NSNumber* _noShare;
	NSNumber* _noSharePublicly;

}

@property (nonatomic,retain) NSNumber * noUpdateTitle;                //@synthesize noUpdateTitle=_noUpdateTitle - In the implementation block
@property (nonatomic,retain) NSNumber * noUpdateContent;              //@synthesize noUpdateContent=_noUpdateContent - In the implementation block
@property (nonatomic,retain) NSNumber * noEmail;                      //@synthesize noEmail=_noEmail - In the implementation block
@property (nonatomic,retain) NSNumber * noShare;                      //@synthesize noShare=_noShare - In the implementation block
@property (nonatomic,retain) NSNumber * noSharePublicly;              //@synthesize noSharePublicly=_noSharePublicly - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)noEmail;
-(NSNumber *)noShare;
-(NSNumber *)noUpdateTitle;
-(void)setNoUpdateTitle:(NSNumber *)arg1 ;
-(NSNumber *)noUpdateContent;
-(void)setNoUpdateContent:(NSNumber *)arg1 ;
-(void)setNoEmail:(NSNumber *)arg1 ;
-(void)setNoShare:(NSNumber *)arg1 ;
-(NSNumber *)noSharePublicly;
-(void)setNoSharePublicly:(NSNumber *)arg1 ;
@end

