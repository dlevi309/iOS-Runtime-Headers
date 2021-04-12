/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	CGSize _pixelSize;
	CGSize _nativePixelSize;
	double _refreshRate;
	long long _hdrMode;

}

@property (nonatomic,readonly) long long overscanCompensation;              //@synthesize overscanCompensation=_overscanCompensation - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                            //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize nativePixelSize;                      //@synthesize nativePixelSize=_nativePixelSize - In the implementation block
@property (nonatomic,readonly) double refreshRate;                          //@synthesize refreshRate=_refreshRate - In the implementation block
@property (nonatomic,readonly) long long hdrMode;                           //@synthesize hdrMode=_hdrMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)hdrMode;
-(CGSize)pixelSize;
-(long long)overscanCompensation;
-(double)refreshRate;
-(CGSize)nativePixelSize;
@end

