/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SASyncAppIdentifyingInfo, NSNumber, NSArray, NSString;

@interface SASyncAppMetaData : AceObject <SAAceSerializable>

@property (nonatomic,retain) SASyncAppIdentifyingInfo * appIdentifyingInfo; 
@property (nonatomic,copy) NSNumber * developerMode; 
@property (nonatomic,copy) NSArray * syncSlots; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)appMetaData;
-(id)_af_preferredBundleID;
-(id)groupIdentifier;
-(SASyncAppIdentifyingInfo *)appIdentifyingInfo;
-(id)encodedClassName;
-(NSNumber *)developerMode;
-(void)setDeveloperMode:(NSNumber *)arg1 ;
-(void)setSyncSlots:(NSArray *)arg1 ;
-(void)setAppIdentifyingInfo:(SASyncAppIdentifyingInfo *)arg1 ;
-(NSArray *)syncSlots;
@end

