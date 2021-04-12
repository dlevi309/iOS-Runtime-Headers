/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSURL, NSString;

@interface SAUIURLData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSData * data; 
@property (nonatomic,copy) NSURL * uri; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)uRLData;
+(id)uRLDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(id)groupIdentifier;
-(NSURL *)uri;
-(void)setUri:(NSURL *)arg1 ;
-(id)encodedClassName;
@end

