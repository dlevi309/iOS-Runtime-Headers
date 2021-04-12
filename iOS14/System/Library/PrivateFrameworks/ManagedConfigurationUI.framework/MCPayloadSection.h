/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
*/


@class NSString, NSMutableArray;

@interface MCPayloadSection : NSObject {

	NSString* _sectionTitle;
	NSString* _sectionFooter;
	NSMutableArray* _payloadInfos;

}

@property (nonatomic,retain) NSString * sectionTitle;                    //@synthesize sectionTitle=_sectionTitle - In the implementation block
@property (nonatomic,retain) NSString * sectionFooter;                   //@synthesize sectionFooter=_sectionFooter - In the implementation block
@property (nonatomic,retain) NSMutableArray * payloadInfos;              //@synthesize payloadInfos=_payloadInfos - In the implementation block
-(id)init;
-(NSString *)sectionTitle;
-(void)setSectionTitle:(NSString *)arg1 ;
-(NSString *)sectionFooter;
-(void)setSectionFooter:(NSString *)arg1 ;
-(id)initWithSectionTitle:(id)arg1 footer:(id)arg2 payloadInfos:(id)arg3 ;
-(NSMutableArray *)payloadInfos;
-(void)setPayloadInfos:(NSMutableArray *)arg1 ;
@end

