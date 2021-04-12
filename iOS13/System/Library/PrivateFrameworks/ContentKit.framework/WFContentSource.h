/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSArray, NSString;

@interface WFContentSource : NSObject <NSSecureCoding, WFSerializableContent> {

	NSArray* _dataInfos;

}

@property (nonatomic,copy,readonly) NSArray * dataInfos;                               //@synthesize dataInfos=_dataInfos - In the implementation block
@property (nonatomic,readonly) unsigned long long derivedDisclosureLevel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)sourceByMergingSources:(id)arg1 ;
+(id)sourceWithBundleIdentifier:(id)arg1 disclosureLevel:(unsigned long long)arg2 ;
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)sourceWithDisclosureLevel:(unsigned long long)arg1 managedLevel:(unsigned long long)arg2 ;
+(id)shortcutsAppSourceWithDisclosureLevel:(unsigned long long)arg1 ;
+(id)sourceWithAccountBasedBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 ;
+(id)sourceWithBundleIdentifier:(id)arg1 accountIdentifier:(id)arg2 disclosureLevel:(unsigned long long)arg3 managedLevel:(unsigned long long)arg4 ;
+(id)sourceWithDataInfos:(id)arg1 ;
+(id)shortcutsAppSource;
+(id)combiningDataInfos:(id)arg1 withDataInfos:(id)arg2 ;
+(id)reducedDataInfoFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)wfSerializedRepresentation;
-(BOOL)isAllowedToBeSentToDestinationWithManagedLevel:(unsigned long long)arg1 ;
-(NSArray *)dataInfos;
-(unsigned long long)derivedDisclosureLevel;
-(BOOL)isSupersetOfContentSource:(id)arg1 ;
-(BOOL)isMoreRestrictiveThan:(id)arg1 ;
-(BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 ;
-(BOOL)isEligibleToShareWithResultManagedLevel:(unsigned long long*)arg1 usingProfileConnection:(id)arg2 ;
-(id)sourceByAddingDataInfo:(id)arg1 ;
-(id)initWithDataInfo:(id)arg1 ;
-(id)initWithDataInfos:(id)arg1 ;
@end

