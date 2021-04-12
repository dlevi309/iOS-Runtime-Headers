/*
* Generated on Thursday, January 14, 2021 at 2:20:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface CTNetworkList : NSObject <NSCopying, NSSecureCoding> {

	BOOL _moreComing;
	NSMutableArray* _networks;

}

@property (nonatomic,retain) NSMutableArray * networks;              //@synthesize networks=_networks - In the implementation block
@property (assign,nonatomic) BOOL moreComing;                        //@synthesize moreComing=_moreComing - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableArray *)networks;
-(BOOL)moreComing;
-(void)setNetworks:(NSMutableArray *)arg1 ;
-(void)setMoreComing:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

