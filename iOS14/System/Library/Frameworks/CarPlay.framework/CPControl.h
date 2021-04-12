/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CarPlay.framework/CarPlay
*/

@class NSUUID;


@protocol CPControl <NSObject>
@property (nonatomic,retain) NSUUID * identifier; 
@required
-(void)setIdentifier:(id)arg1;
-(NSUUID *)identifier;
-(void)handlePrimaryAction;
-(void)handlePressesStart;
-(void)handlePressesEnd;

@end

