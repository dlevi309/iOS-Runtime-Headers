/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSString *)clientIdentifierHeader;
-(NSArray *)softwareTypes;
-(BOOL)isForced;
@end

