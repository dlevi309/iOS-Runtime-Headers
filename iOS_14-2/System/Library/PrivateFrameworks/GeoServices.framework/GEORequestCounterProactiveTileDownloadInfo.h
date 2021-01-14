/*
* Generated on Thursday, January 14, 2021 at 2:20:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface GEORequestCounterProactiveTileDownloadInfo : NSObject <NSSecureCoding> {

	NSString* _identifier;
	NSArray* _policies;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * policies;                 //@synthesize policies=_policies - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)policies;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 policies:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
@end

