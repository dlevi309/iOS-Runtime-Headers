/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>

@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal> {

	NSString* _puppetName;

}

@property (nonatomic,copy,readonly) NSString * puppetName;                   //@synthesize puppetName=_puppetName - In the implementation block
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(BOOL)isEditable;
-(NSString *)puppetName;
-(BOOL)isPuppet;
-(unsigned long long)hash;
-(id)initWithPuppetName:(id)arg1 ;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
@end

