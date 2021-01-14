/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNTimepoint.h>
#import <libobjc.A.dylib/MNJSONOutput.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _MNTimepointAndTransportType : MNTimepoint <MNJSONOutput, NSSecureCoding, NSCopying> {

	int _transportType;

}

@property (assign,nonatomic) int transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTransportType:(int)arg1 ;
-(NSString *)debugDescription;
-(int)transportType;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)jsonDictionary;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(long long)arg1 date:(id)arg2 transportType:(int)arg3 ;
@end

