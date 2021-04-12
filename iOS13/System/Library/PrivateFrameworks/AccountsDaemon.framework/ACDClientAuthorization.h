/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
*/


@class ACDClient, NSSet, NSDictionary;

@interface ACDClientAuthorization : NSObject {

	BOOL _isGranted;
	ACDClient* _client;
	NSSet* _grantedPermissions;
	NSDictionary* _options;

}

@property (assign,nonatomic) BOOL isGranted;                          //@synthesize isGranted=_isGranted - In the implementation block
@property (nonatomic,retain) ACDClient * client;                      //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSSet * grantedPermissions;              //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                    //@synthesize options=_options - In the implementation block
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(ACDClient *)client;
-(void)setClient:(ACDClient *)arg1 ;
-(BOOL)isGranted;
-(id)initForClient:(id)arg1 ;
-(NSSet *)grantedPermissions;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
-(void)setIsGranted:(BOOL)arg1 ;
@end

