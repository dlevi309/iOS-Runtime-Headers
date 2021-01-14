/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
*/

#import <PrivateFederatedLearning/PrivateFederatedLearning-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/CKCodeOperationMessageMutation.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PFLFetchTasksRequest : PBRequest <CKCodeOperationMessageMutation, NSCopying> {

	NSString* _appBundleIdentifier;
	NSString* _teamIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasTeamIdentifier; 
@property (nonatomic,retain) NSString * teamIdentifier;                   //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasAppBundleIdentifier; 
@property (nonatomic,retain) NSString * appBundleIdentifier;              //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)appBundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)teamIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasAppBundleIdentifier;
-(BOOL)hasTeamIdentifier;
@end

