/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray;

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying> {

	NSString* _clientIdentifierHeader;
	BOOL _forced;
	NSArray* _softwareTypes;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifierHeader;              //@synthesize clientIdentifierHeader=_clientIdentifierHeader - In the implementation block
@property (getter=isForced,nonatomic,readonly) BOOL forced;                         //@synthesize forced=_forced - In the implementation block
@property (nonatomic,copy,readonly) NSArray * softwareTypes;                        //@synthesize softwareTypes=_softwareTypes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)isForced;
-(NSString *)clientIdentifierHeader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)softwareTypes;
-(void)dealloc;
@end

