/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)photoList;
+(id)photoListWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(id)encodedClassName;
@end

