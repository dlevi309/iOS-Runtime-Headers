/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDate, NSDictionary;

@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing> {

	NSString* _checksum;
	NSDate* _registeredDate;

}

@property (nonatomic,copy) NSString * checksum;                                  //@synthesize checksum=_checksum - In the implementation block
@property (nonatomic,copy) NSDate * registeredDate;                              //@synthesize registeredDate=_registeredDate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)JSONKeyPathsByPropertyKey;
-(NSDate *)registeredDate;
-(void)setChecksum:(NSString *)arg1 ;
-(NSString *)checksum;
-(void)setRegisteredDate:(NSDate *)arg1 ;
@end

