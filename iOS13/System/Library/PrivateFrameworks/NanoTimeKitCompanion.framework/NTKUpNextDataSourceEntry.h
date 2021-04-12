/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedName;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)isDonation;
-(void)setIsDonation:(BOOL)arg1 ;
-(id)initWithDataSourceIdentifiers:(id)arg1 localizedName:(id)arg2 isDonation:(BOOL)arg3 ;
@end

