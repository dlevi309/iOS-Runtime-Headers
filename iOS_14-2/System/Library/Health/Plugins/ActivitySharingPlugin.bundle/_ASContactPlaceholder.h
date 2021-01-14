/*
* Generated on Thursday, January 14, 2021 at 2:29:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/ActivitySharingPlugin.bundle/ActivitySharingPlugin
*/


@class ASContact;

@interface _ASContactPlaceholder : NSObject {

	id _token;
	ASContact* _contact;

}

@property (nonatomic,retain) id token;                         //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) ASContact * contact;              //@synthesize contact=_contact - In the implementation block
-(ASContact *)contact;
-(void)setContact:(ASContact *)arg1 ;
-(void)setToken:(id)arg1 ;
-(id)token;
@end

