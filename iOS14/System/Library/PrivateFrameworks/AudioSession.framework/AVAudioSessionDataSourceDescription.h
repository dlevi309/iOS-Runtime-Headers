/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSNumber, NSString, NSArray;

@interface AVAudioSessionDataSourceDescription : NSObject {

	void* _impl;

}

@property (readonly) NSNumber * dataSourceID; 
@property (readonly) NSString * dataSourceName; 
@property (readonly) NSString * location; 
@property (readonly) NSString * orientation; 
@property (readonly) NSArray * supportedPolarPatterns; 
@property (readonly) NSString * selectedPolarPattern; 
@property (readonly) NSString * preferredPolarPattern; 
+(id)privateCreateArray:(id)arg1 portID:(id)arg2 sessionID:(unsigned)arg3 ;
-(NSString *)preferredPolarPattern;
-(NSString *)dataSourceName;
-(NSString *)location;
-(NSNumber *)dataSourceID;
-(id)initWithSessionID:(unsigned)arg1 ;
-(id)initWithRawSourceDescription:(id)arg1 andOwningPortID:(id)arg2 andSessionID:(unsigned)arg3 ;
-(id)description;
-(DataSourceDescriptionImpl*)privateGetImplementation;
-(NSArray *)supportedPolarPatterns;
-(BOOL)setPreferredPolarPattern:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)hash;
-(NSString *)orientation;
-(BOOL)privateMatchesRawDescription:(id)arg1 ;
-(BOOL)isEqualToDataSource:(id)arg1 ;
-(id)privateGetOwningPortID;
-(void)configurePolarPatterns:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)selectedPolarPattern;
@end

