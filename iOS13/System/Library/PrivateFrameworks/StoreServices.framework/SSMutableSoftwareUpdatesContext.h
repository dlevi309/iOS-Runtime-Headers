/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSSoftwareUpdatesContext.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSArray;

@interface SSMutableSoftwareUpdatesContext : SSSoftwareUpdatesContext <SSXPCCoding>

@property (nonatomic,copy) NSString * clientIdentifierHeader; 
@property (assign,getter=isForced,nonatomic) BOOL forced; 
@property (nonatomic,copy) NSArray * softwareTypes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)setForced:(BOOL)arg1 ;
-(void)setSoftwareTypes:(NSArray *)arg1 ;
@end

