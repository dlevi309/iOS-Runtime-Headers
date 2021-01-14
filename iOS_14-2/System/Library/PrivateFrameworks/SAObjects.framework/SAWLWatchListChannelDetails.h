/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString, NSURL;

@interface SAWLWatchListChannelDetails : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * appIconDynamicImage; 
@property (nonatomic,copy) NSString * appName; 
@property (nonatomic,copy) NSURL * appStoreURL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)watchListChannelDetails;
+(id)watchListChannelDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)appIconDynamicImage;
-(void)setAppIconDynamicImage:(NSData *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setAppName:(NSString *)arg1 ;
-(NSURL *)appStoreURL;
-(void)setAppStoreURL:(NSURL *)arg1 ;
-(NSString *)appName;
@end

