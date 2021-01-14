/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/_LSQueryResult.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class LSExtensionPointRecord, NSString, NSNumber, NSDictionary;

@interface LSExtensionPoint : _LSQueryResult <NSCopying, NSSecureCoding> {

	LSExtensionPointRecord* _record;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSNumber * platform; 
@property (nonatomic,readonly) NSDictionary * sdkEntry; 
+(BOOL)supportsSecureCoding;
+(id)extensionPointForIdentifier:(id)arg1 platform:(id)arg2 ;
+(id)identifierForCurrentProcess;
+(id)extensionPointForIdentifier:(id)arg1 ;
+(id)_synthesizedExtensionPointWithIdentifier:(id)arg1 ;
-(NSNumber *)platform;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)_initWithRecord:(id)arg1 resolveAndDetach:(BOOL)arg2 ;
-(id)description;
-(NSDictionary *)sdkEntry;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

