/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


@protocol TSPForwardsCompatibleField
@property (nonatomic,readonly) BOOL hasKnownValues; 
@property (nonatomic,readonly) BOOL hasUnknownValues; 
@required
-(void)loadFromUnarchiver:(id)arg1;
-(void)saveToArchiver:(id)arg1;
-(void)updateMessageInfo:(MessageInfo*)arg1;
-(const FieldInfo*)fieldInfo;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2;
-(BOOL)hasKnownValues;
-(BOOL)hasUnknownValues;

@end

