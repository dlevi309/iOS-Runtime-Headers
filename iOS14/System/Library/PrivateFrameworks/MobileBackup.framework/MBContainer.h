/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSDate;

@interface MBContainer : NSObject <NSCopying> {

	NSMutableDictionary* _plist;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) int containerType; 
@property (nonatomic,readonly) NSString * containerTypeString; 
@property (nonatomic,retain) NSString * containerDir; 
@property (nonatomic,readonly) NSString * safeHarborDir; 
@property (nonatomic,retain) NSDate * datePlacedInSafeHarbor; 
@property (nonatomic,readonly) BOOL isSystemContainer; 
@property (nonatomic,readonly) BOOL isSystemSharedContainer; 
@property (getter=isSafeHarbor,nonatomic,readonly) BOOL safeHarbor; 
+(id)containerWithPropertyList:(id)arg1 ;
+(id)containerWithDomainName:(id)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
-(id)domain;
-(NSString *)containerDir;
-(unsigned long long)hash;
-(BOOL)isSystemContainer;
-(BOOL)isSystemSharedContainer;
-(id)propertyListForBackupProperties;
-(BOOL)isSafeHarbor;
-(NSDate *)datePlacedInSafeHarbor;
-(NSString *)safeHarborDir;
-(NSString *)containerTypeString;
-(void)setContainerDir:(NSString *)arg1 ;
-(void)setDatePlacedInSafeHarbor:(NSDate *)arg1 ;
-(int)containerType;
-(id)propertyListForSafeHarborInfo;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

