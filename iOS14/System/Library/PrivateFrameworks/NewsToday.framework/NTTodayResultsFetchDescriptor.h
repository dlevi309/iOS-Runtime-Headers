/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

@class NSString;


@protocol NTTodayResultsFetchDescriptor <NSCopying>
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) Class descriptorsOperationClass; 
@property (nonatomic,readonly) Class fetchOperationClass; 
@required
-(Class)fetchOperationClass;
-(Class)descriptorsOperationClass;
-(id)placeholderSectionDescriptorsWithContentRequest:(id)arg1;
-(NSString *)sourceIdentifier;

@end

