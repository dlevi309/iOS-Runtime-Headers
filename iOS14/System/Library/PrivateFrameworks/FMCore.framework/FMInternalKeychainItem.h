/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
*/

#import <FMCore/FMKeychainItem.h>

@class NSString, NSDate, NSData;

@interface FMInternalKeychainItem : NSObject <FMKeychainItem> {

	NSString* _password;
	NSDate* _lastModifyDate;
	NSDate* _creationDate;
	NSData* _rawData;

}

@property (nonatomic,retain) NSString * password;                   //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSDate * lastModifyDate;               //@synthesize lastModifyDate=_lastModifyDate - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                 //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSData * rawData;                      //@synthesize rawData=_rawData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSData *)rawData;
-(NSString *)password;
-(void)setLastModifyDate:(NSDate *)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
-(NSDate *)creationDate;
-(void)setPassword:(NSString *)arg1 ;
-(NSDate *)lastModifyDate;
-(id)initWithResults:(id)arg1 ;
@end

