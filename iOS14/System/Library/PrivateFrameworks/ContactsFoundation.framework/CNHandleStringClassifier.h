/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


@protocol _CNHandleStringClassificationStrategy;
@interface CNHandleStringClassifier : NSObject {

	id<_CNHandleStringClassificationStrategy> _classificationStrategy;

}

@property (nonatomic,readonly) id<_CNHandleStringClassificationStrategy> classificationStrategy;              //@synthesize classificationStrategy=_classificationStrategy - In the implementation block
+(id)classificationOfHandleStrings:(id)arg1 classificationQuality:(unsigned long long)arg2 ;
+(id)classificationOfHandleStrings:(id)arg1 ;
+(id)classificationStrategyForQuality:(unsigned long long)arg1 ;
-(id)init;
-(id)description;
-(id)initWithClassificationStrategy:(id)arg1 ;
-(id<_CNHandleStringClassificationStrategy>)classificationStrategy;
-(id)initWithClassificationQuality:(unsigned long long)arg1 ;
-(unsigned long long)typeOfHandleString:(id)arg1 ;
-(void)classifyHandleString:(id)arg1 builder:(id)arg2 ;
@end

