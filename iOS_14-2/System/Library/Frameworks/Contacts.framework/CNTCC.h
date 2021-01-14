/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNTCC;
@interface CNTCC : NSObject {

	id<CNTCC> _tccServices;

}

@property (nonatomic,retain) id<CNTCC> tccServices;              //@synthesize tccServices=_tccServices - In the implementation block
+(id)sharedInstance;
-(void)setTccServices:(id<CNTCC>)arg1 ;
-(void)simulate:(long long)arg1 ;
-(int)accessPreflight;
-(id<CNTCC>)tccServices;
@end

