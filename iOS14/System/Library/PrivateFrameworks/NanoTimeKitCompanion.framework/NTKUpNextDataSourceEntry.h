/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSString;

@interface NTKUpNextDataSourceEntry : NSObject <NSCopying> {

	BOOL _isDonation;
	NSSet* _identifiers;
	NSString* _localizedName;

}

@property (nonatomic,retain) NSSet * identifiers;                   //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,retain) NSString * localizedName;              //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) BOOL isDonation;                       //@synthesize isDonation=_isDonation - In the implementation block
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)localizedName;
-(NSSet *)identifiers;
-(id)description;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsDonation:(BOOL)arg1 ;
-(id)initWithDataSourceIdentifiers:(id)arg1 localizedName:(id)arg2 isDonation:(BOOL)arg3 ;
-(BOOL)isDonation;
@end

