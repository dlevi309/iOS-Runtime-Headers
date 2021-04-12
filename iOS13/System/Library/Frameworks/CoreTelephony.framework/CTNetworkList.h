/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMutableArray *)networks;
-(void)setNetworks:(NSMutableArray *)arg1 ;
-(BOOL)moreComing;
-(void)setMoreComing:(BOOL)arg1 ;
@end

