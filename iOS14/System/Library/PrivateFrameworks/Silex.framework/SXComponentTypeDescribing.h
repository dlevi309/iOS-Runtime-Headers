/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/SXComponentTypeDescribing.h>
@class NSString;


@protocol SXComponentTypeDescribing <NSObject>
@property (readonly,nonatomic) NSString * type; 
@property (readonly,nonatomic) int role; 
@required
-(NSString *)type;
-(int)role;

@end

#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SXComponentTypeDescribing : NSObject <SXComponentTypeDescribing, NSCopying> {

	int _role;
	NSString* _type;

}

@property (nonatomic,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int role;                            //@synthesize role=_role - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptionWithType:(id)arg1 role:(int)arg2 ;
-(NSString *)type;
-(unsigned long long)hash;
-(int)role;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

