/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/


@class NSArray, NSString, NSNumber;

@interface NMSSHHostConfig : NSObject {

	NSArray* _hostPatterns;
	NSString* _hostname;
	NSString* _user;
	NSNumber* _port;
	NSArray* _identityFiles;

}

@property (nonatomic,retain) NSArray * hostPatterns;               //@synthesize hostPatterns=_hostPatterns - In the implementation block
@property (nonatomic,retain) NSString * hostname;                  //@synthesize hostname=_hostname - In the implementation block
@property (nonatomic,retain) NSString * user;                      //@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSNumber * port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSArray * identityFiles;              //@synthesize identityFiles=_identityFiles - In the implementation block
-(id)init;
-(NSString *)user;
-(NSNumber *)port;
-(void)setPort:(NSNumber *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)hostname;
-(void)setHostname:(NSString *)arg1 ;
-(id)arrayByRemovingDuplicateElementsFromArray:(id)arg1 ;
-(id)mergedArray:(id)arg1 withArray:(id)arg2 ;
-(NSArray *)hostPatterns;
-(void)setHostPatterns:(NSArray *)arg1 ;
-(NSArray *)identityFiles;
-(void)setIdentityFiles:(NSArray *)arg1 ;
@end

