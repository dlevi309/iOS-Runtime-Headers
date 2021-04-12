/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SAAISearch : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) double duration; 
@property (nonatomic,copy) NSData * fingerprint; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)search;
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setFingerprint:(NSData *)arg1 ;
-(NSData *)fingerprint;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

