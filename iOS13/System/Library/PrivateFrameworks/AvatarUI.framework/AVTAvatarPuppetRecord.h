/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarRecordInternal.h>

@class NSString;

@interface AVTAvatarPuppetRecord : NSObject <AVTAvatarRecordInternal> {

	NSString* _puppetName;

}

@property (nonatomic,copy,readonly) NSString * puppetName;                   //@synthesize puppetName=_puppetName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isPuppet,nonatomic,readonly) BOOL puppet; 
+(/*^block*/id)matchingIdentifierTest:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)identifier;
-(BOOL)isEditable;
-(BOOL)isPuppet;
-(NSString *)puppetName;
-(id)initWithPuppetName:(id)arg1 ;
@end

