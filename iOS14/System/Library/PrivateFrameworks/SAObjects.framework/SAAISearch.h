/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SAAISearch : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSData * fingerprint; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)fingerprint;
-(void)setDuration:(double)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setFingerprint:(NSData *)arg1 ;
-(BOOL)requiresResponse;
-(double)duration;
@end

