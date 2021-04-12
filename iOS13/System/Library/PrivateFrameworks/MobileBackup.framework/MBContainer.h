/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)domain;
-(NSString *)identifier;
-(id)initWithPropertyList:(id)arg1 ;
-(int)containerType;
-(BOOL)isSystemContainer;
-(BOOL)isSystemSharedContainer;
-(id)propertyListForBackupProperties;
-(NSString *)containerDir;
-(BOOL)isSafeHarbor;
-(NSDate *)datePlacedInSafeHarbor;
-(NSString *)safeHarborDir;
-(NSString *)containerTypeString;
-(void)setContainerDir:(NSString *)arg1 ;
-(void)setDatePlacedInSafeHarbor:(NSDate *)arg1 ;
-(id)propertyListForSafeHarborInfo;
@end

