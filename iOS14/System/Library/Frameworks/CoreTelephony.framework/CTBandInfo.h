/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface CTBandInfo : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _fActiveBands;
	NSMutableDictionary* _fSupportedBands;

}

@property (nonatomic,retain) NSMutableDictionary * fActiveBands;                 //@synthesize fActiveBands=_fActiveBands - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * fSupportedBands;              //@synthesize fSupportedBands=_fSupportedBands - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)activeBands;
-(NSMutableDictionary *)fActiveBands;
-(id)initWithSupported:(id)arg1 andActiveBands:(id)arg2 ;
-(BOOL)addActiveBand:(id)arg1 forRat:(id)arg2 ;
-(id)supportedBandsForRat:(id)arg1 ;
-(id)supportedBands;
-(NSMutableDictionary *)fSupportedBands;
-(id)init;
-(void)setFActiveBands:(NSMutableDictionary *)arg1 ;
-(BOOL)addSupportedBands:(id)arg1 forRat:(id)arg2 ;
-(BOOL)addSupportedBand:(id)arg1 forRat:(id)arg2 ;
-(BOOL)addActiveBands:(id)arg1 forRat:(id)arg2 ;
-(id)activeBandsForRat:(id)arg1 ;
-(id)initWithActiveBands:(id)arg1 ;
-(void)setFSupportedBands:(NSMutableDictionary *)arg1 ;
-(id)initWithSupportedBands:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

