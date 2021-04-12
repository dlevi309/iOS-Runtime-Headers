/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, WFWorkflowIcon;

@interface WFWorkflowCollection : WFDatabaseObjectDescriptor {

	BOOL _folder;
	BOOL _deleted;
	NSString* _name;
	WFWorkflowIcon* _icon;

}

@property (readonly,nonatomic) NSString * displayName; 
@property (readonly,nonatomic) NSString * displaySubtitle; 
@property (nonatomic,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFWorkflowIcon * icon;                      //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSString * systemIconName; 
@property (getter=isFolder,nonatomic,readonly) BOOL folder;                //@synthesize folder=_folder - In the implementation block
@property (getter=isDeleted,nonatomic,readonly) BOOL deleted;              //@synthesize deleted=_deleted - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultIcon;
+(id)defaultName;
-(NSString *)displaySubtitle;
-(NSString *)displayName;
-(WFWorkflowIcon *)icon;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(BOOL)isDeleted;
-(BOOL)isFolder;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 isFolder:(BOOL)arg2 name:(id)arg3 icon:(id)arg4 isDeleted:(BOOL)arg5 ;
-(NSString *)systemIconName;
@end

