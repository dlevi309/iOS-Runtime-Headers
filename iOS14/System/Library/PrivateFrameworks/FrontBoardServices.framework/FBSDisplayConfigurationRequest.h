/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayConfigurationRequest : NSObject <BSXPCCoding, BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {

	long long _overscanCompensation;
	CGSize _nativePixelSize;
	double _refreshRate;
	long long _hdrMode;

}

@property (nonatomic,readonly) long long overscanCompensation;              //@synthesize overscanCompensation=_overscanCompensation - In the implementation block
@property (nonatomic,readonly) CGSize nativePixelSize;                      //@synthesize nativePixelSize=_nativePixelSize - In the implementation block
@property (nonatomic,readonly) double refreshRate;                          //@synthesize refreshRate=_refreshRate - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                           //@synthesize hdrMode=_hdrMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(double)refreshRate;
-(long long)hdrMode;
-(id)init;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(CGSize)nativePixelSize;
-(NSString *)description;
-(id)initWithXPCDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)overscanCompensation;
-(BOOL)isEqual:(id)arg1 ;
@end

