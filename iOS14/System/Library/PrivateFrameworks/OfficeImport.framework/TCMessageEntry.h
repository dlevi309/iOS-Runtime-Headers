/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString, NSArray, NSMutableArray;

@interface TCMessageEntry : NSObject {

	unsigned long long m_timeStamp;
	int m_tag;
	NSString* m_text;
	NSArray* m_parameters;
	NSMutableArray* m_affectedObjects;
	int m_count;
	NSString* additionalText;

}

@property (nonatomic,copy) NSString * additionalText; 
@property (assign,nonatomic) unsigned long long timeStamp; 
+(void)initialize;
-(unsigned long long)timeStamp;
-(id)description;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(int)getCount;
-(id)getParameter:(unsigned)arg1 ;
-(id)getMessageText;
-(id)affectedObjects;
-(void)mergeEntries:(id)arg1 ;
-(id)initWithTag:(int)arg1 affectedObject:(id)arg2 text:(id)arg3 parameters:(char*)arg4 ;
-(void)addAffectedObject:(id)arg1 ;
-(long long)timeStampCompare:(id)arg1 ;
-(int)getMessageTag;
-(id)getAdditionalText;
-(NSString *)additionalText;
-(unsigned long long)getParameterCount;
-(void)setAdditionalText:(NSString *)arg1 ;
@end

