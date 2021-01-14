/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesInterfaceKit.framework/CloudMediaServicesInterfaceKit
*/

#import <CloudMediaServicesInterfaceKit/CloudMediaServicesInterfaceKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMSServiceSetting : NSObject <NSSecureCoding, NSCopying> {

	BOOL _updateListeningHistory;

}

@property (assign,nonatomic) BOOL updateListeningHistory;              //@synthesize updateListeningHistory=_updateListeningHistory - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)settingDictionaryFromData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUpdateListeningHistory:(BOOL)arg1 ;
-(BOOL)updateListeningHistory;
@end

