/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString, SAUIAppPunchOut;

@interface SALocalSearchPhoto : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * fullsize; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSURL * largeSize; 
@property (nonatomic,copy) NSURL * maximumSize; 
@property (nonatomic,retain) SAUIAppPunchOut * photoPunchOut; 
@property (nonatomic,copy) NSURL * thumbnail; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photo;
+(id)photoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)largeSize;
-(NSURL *)thumbnail;
-(id)encodedClassName;
-(NSURL *)maximumSize;
-(NSURL *)fullsize;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setFullsize:(NSURL *)arg1 ;
-(void)setLargeSize:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)photoPunchOut;
-(void)setPhotoPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setThumbnail:(NSURL *)arg1 ;
-(void)setMaximumSize:(NSURL *)arg1 ;
@end

