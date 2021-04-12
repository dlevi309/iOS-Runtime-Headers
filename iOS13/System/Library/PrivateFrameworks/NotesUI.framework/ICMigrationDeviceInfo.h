/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/NotesUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICMigrationDeviceInfo : NSObject <NSCopying> {

	BOOL _upgraded;
	BOOL _upgradedToIOS13;
	BOOL _upgradable;
	BOOL _upgradableToIOS13;
	BOOL _isOSXDevice;
	BOOL _isIOSDevice;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL upgraded;                       //@synthesize upgraded=_upgraded - In the implementation block
@property (nonatomic,readonly) BOOL upgradedToIOS13;                //@synthesize upgradedToIOS13=_upgradedToIOS13 - In the implementation block
@property (nonatomic,readonly) BOOL upgradable;                     //@synthesize upgradable=_upgradable - In the implementation block
@property (nonatomic,readonly) BOOL upgradableToIOS13;              //@synthesize upgradableToIOS13=_upgradableToIOS13 - In the implementation block
@property (nonatomic,readonly) BOOL isOSXDevice;                    //@synthesize isOSXDevice=_isOSXDevice - In the implementation block
@property (nonatomic,readonly) BOOL isIOSDevice;                    //@synthesize isIOSDevice=_isIOSDevice - In the implementation block
+(void)logDeviceList:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(id)loggableDescription;
-(BOOL)upgradableToIOS13;
-(BOOL)upgradedToIOS13;
-(BOOL)isIOSDevice;
-(BOOL)upgraded;
-(BOOL)upgradable;
-(BOOL)isOSXDevice;
-(id)initWithName:(id)arg1 upgradable:(BOOL)arg2 upgraded:(BOOL)arg3 ;
-(BOOL)shouldBeHidden;
-(id)attributedStringWithAttributes:(id)arg1 asteriskColor:(id)arg2 ;
@end

