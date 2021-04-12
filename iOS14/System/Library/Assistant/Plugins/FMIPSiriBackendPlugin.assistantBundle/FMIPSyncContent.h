/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/FMIPSiriBackendPlugin.assistantBundle/FMIPSiriBackendPlugin
*/


@class NSString, NSDictionary;

@interface FMIPSyncContent : NSObject {

	NSString* _firstAnchor;
	NSString* _postAnchor;
	NSString* _validity;
	NSDictionary* _syncObjects;

}

@property (nonatomic,retain) NSDictionary * syncObjects;              //@synthesize syncObjects=_syncObjects - In the implementation block
@property (nonatomic,retain) NSString * firstAnchor;                  //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (nonatomic,retain) NSString * postAnchor;                   //@synthesize postAnchor=_postAnchor - In the implementation block
@property (nonatomic,retain) NSString * validity;                     //@synthesize validity=_validity - In the implementation block
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
-(NSString *)firstAnchor;
-(void)setPostAnchor:(NSString *)arg1 ;
-(NSString *)postAnchor;
-(void)setFirstAnchor:(NSString *)arg1 ;
-(void)setSyncObjects:(NSDictionary *)arg1 ;
-(NSDictionary *)syncObjects;
-(id)initWithObjects:(id)arg1 anchor:(id)arg2 ;
-(void)objectForPreAnchor:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

