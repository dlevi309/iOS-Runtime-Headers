/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * photos; 
@property (nonatomic,copy) NSString * providerId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)photoListWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)photoList;
-(id)groupIdentifier;
-(void)setPhotos:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSArray *)photos;
-(void)setProviderId:(NSString *)arg1 ;
-(NSString *)providerId;
@end

