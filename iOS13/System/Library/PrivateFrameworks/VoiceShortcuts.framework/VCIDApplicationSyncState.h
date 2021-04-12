/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
+(id)JSONKeyPathsByPropertyKey;
-(NSDate *)registeredDate;
-(NSString *)checksum;
-(void)setChecksum:(NSString *)arg1 ;
-(void)setRegisteredDate:(NSDate *)arg1 ;
@end

