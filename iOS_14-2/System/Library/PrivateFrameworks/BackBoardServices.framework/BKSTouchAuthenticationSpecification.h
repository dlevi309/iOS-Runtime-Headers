/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>

@class NSSet, NSString;

@interface BKSTouchAuthenticationSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable> {

	NSSet* _displays;
	unsigned _slotID;
	unsigned long long _authenticationMessageContext;

}

@property (nonatomic,copy,readonly) NSSet * displays;                                        //@synthesize displays=_displays - In the implementation block
@property (nonatomic,readonly) unsigned slotID;                                              //@synthesize slotID=_slotID - In the implementation block
@property (nonatomic,readonly) unsigned long long authenticationMessageContext;              //@synthesize authenticationMessageContext=_authenticationMessageContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)buildSpecification:(/*^block*/id)arg1 ;
-(unsigned)slotID;
-(id)init;
-(NSSet *)displays;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)authenticationMessageContext;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

