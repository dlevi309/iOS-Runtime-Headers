/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface OITSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	id mFirst;
	id mSecond;

}

@property (nonatomic,readonly) id first; 
@property (nonatomic,readonly) id second; 
+(id)pair;
+(id)pairWithPair:(id)arg1 ;
+(id)pairWithFirst:(id)arg1 second:(id)arg2 ;
-(id)second;
-(id)first;
-(long long)compare:(id)arg1 ;
-(id)initWithFirst:(id)arg1 second:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)p_SetFirst:(id)arg1 ;
-(id)initWithPair:(id)arg1 ;
-(id)description;
-(void)p_SetSecond:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

