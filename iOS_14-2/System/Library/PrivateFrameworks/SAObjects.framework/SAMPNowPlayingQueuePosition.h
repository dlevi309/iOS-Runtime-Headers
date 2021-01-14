/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) long long queueSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nowPlayingQueuePosition;
+(id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)index;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setIndex:(long long)arg1 ;
-(void)setQueueSize:(long long)arg1 ;
-(long long)queueSize;
@end

