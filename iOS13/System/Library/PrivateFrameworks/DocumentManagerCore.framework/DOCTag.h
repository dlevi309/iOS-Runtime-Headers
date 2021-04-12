/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
*/

#import <DocumentManagerCore/DocumentManagerCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, UIColor;

@interface DOCTag : NSObject <NSSecureCoding, NSCopying> {

	NSString* _displayName;
	long long _labelIndex;
	long long _type;
	long long _itemCount;
	NSNumber* _sidebarVisible;
	NSNumber* _sidebarPinned;

}

@property (nonatomic,readonly) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long labelIndex;                   //@synthesize labelIndex=_labelIndex - In the implementation block
@property (nonatomic,readonly) long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long itemCount;                    //@synthesize itemCount=_itemCount - In the implementation block
@property (nonatomic,readonly) NSNumber * sidebarVisible;              //@synthesize sidebarVisible=_sidebarVisible - In the implementation block
@property (nonatomic,readonly) NSNumber * sidebarPinned;               //@synthesize sidebarPinned=_sidebarPinned - In the implementation block
@property (nonatomic,readonly) UIColor * displayColor; 
+(BOOL)supportsSecureCoding;
+(id)tagColorWithLabelIndex:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)displayName;
-(long long)itemCount;
-(UIColor *)displayColor;
-(BOOL)isEqualToTag:(id)arg1 ;
-(long long)labelIndex;
-(id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3 ;
-(void)mergeWithTag:(id)arg1 options:(long long)arg2 ;
-(id)initWithICloudTagAttributes:(id)arg1 ;
-(id)iCloudTagAttributes;
-(id)initWithDisplayName:(id)arg1 labelIndex:(long long)arg2 type:(long long)arg3 itemCount:(long long)arg4 sidebarVisible:(id)arg5 sidebarPinned:(id)arg6 ;
-(NSNumber *)sidebarVisible;
-(NSNumber *)sidebarPinned;
@end

