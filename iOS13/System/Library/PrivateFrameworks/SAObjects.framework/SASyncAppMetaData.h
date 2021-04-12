/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)appMetaData;
+(id)appMetaDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_af_preferredBundleID;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASyncAppIdentifyingInfo *)appIdentifyingInfo;
-(NSArray *)syncSlots;
-(void)setAppIdentifyingInfo:(SASyncAppIdentifyingInfo *)arg1 ;
-(NSNumber *)developerMode;
-(void)setDeveloperMode:(NSNumber *)arg1 ;
-(void)setSyncSlots:(NSArray *)arg1 ;
@end

